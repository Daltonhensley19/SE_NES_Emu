#include "window.h"
#include <QApplication>
#include <QDebug>
#include <QFileDialog>
#include <QPixmap>
#include <emu.h>

// Helper method to setup/place buttons on `Window`
auto Window::setup_buttons() -> void
{

  // Create and position the `shutdown_button`
  shutdown_button = new QPushButton("Shutdown", this);
  shutdown_button->setGeometry(45, 750, 100, 50);
  shutdown_button->setCheckable(true);

  // Wire event-handler to button
  QObject::connect(
    shutdown_button, &QPushButton::clicked, this, &Window::shutdown_program);

  // Create and position the `execute_rom_button`
  execute_rom_button = new QPushButton("Execute ROM", this);
  execute_rom_button->setGeometry(350, 750, 100, 50);
  execute_rom_button->setCheckable(true);

  // Wire event-handler to button
  QObject::connect(
    execute_rom_button, &QPushButton::clicked, this, &Window::execute_rom);

  // Create and position the `load_rom_button`
  load_rom_button = new QPushButton("Load ROM", this);
  load_rom_button->setGeometry(655, 750, 100, 50);
  load_rom_button->setCheckable(true);

  // Wire event-handler to button
  QObject::connect(
    load_rom_button, &QPushButton::clicked, this, &Window::load_rom_dialog);
}

// Helper method to setup/place tables on `Window`
auto Window::setup_tables() -> void
{
  // General font size for all labels
  QFont font("Arial", 14, QFont::Bold);

  // Create primary register table
  register_table1 = new QTableWidget(8, 2, this);
  register_table1->setGeometry(45, 10, 250, 280);
  register_table1->setHorizontalHeaderLabels(QStringList() << "Register"
                                                           << "State");

  // Create label for primary register table
  auto reg_label1 = new QLabel("Primary", this);
  reg_label1->setGeometry(305, 10, 90, 20);
  reg_label1->setFont(font);

  // Create labels for columns (primary register table)
  auto reg_list_prime = QStringList() << "A1"
                                      << "B1"
                                      << "C1"
                                      << "D1"
                                      << "E1"
                                      << "F1"
                                      << "H1"
                                      << "L1";

  // Place labels for columns (primary register table)
  for (int row = 0; row < register_table1->rowCount(); row++)
  {
    register_table1->setItem(row, 0, new QTableWidgetItem(reg_list_prime[row]));
    register_table1->setItem(
      row, 1, new QTableWidgetItem("0x" + QString::number(0, 16)));
  }

  // Create labels for columns (secondary register table)
  auto reg_list_sub = QStringList() << "A2"
                                    << "B2"
                                    << "C2"
                                    << "D2"
                                    << "E2"
                                    << "F2"
                                    << "H2"
                                    << "L2";

  // Create secondary register table
  register_table2 = new QTableWidget(8, 2, this);
  register_table2->setGeometry(530, 10, 250, 280);
  register_table2->setHorizontalHeaderLabels(QStringList() << "Register"
                                                           << "State");

  // Create label for secondary register table
  auto reg_label2 = new QLabel("Secondary", this);
  reg_label2->setGeometry(455, 10, 90, 20);
  reg_label2->setFont(font);

  // Place labels for columns (secondary register table)
  for (int row = 0; row < register_table2->rowCount(); row++)
  {
    register_table2->setItem(row, 0, new QTableWidgetItem(reg_list_sub[row]));
    register_table2->setItem(
      row, 1, new QTableWidgetItem("0x" + QString::number(0, 16)));
  }

  // Create special register table
  register_table3 = new QTableWidget(4, 2, this);
  register_table3->setGeometry(45, 320, 250, 150);
  register_table3->setHorizontalHeaderLabels(QStringList() << "Register"
                                                           << "State");

  // Create label for special register table
  auto reg_label3 = new QLabel("Special", this);
  reg_label3->setGeometry(305, 320, 90, 20);
  reg_label3->setFont(font);

  // Create labels for columns (special register table)
  auto reg_list_special = QStringList() << "PC"
                                        << "SP"
                                        << "IX"
                                        << "IY";

  // Place labels for columns (special register table)
  for (int row = 0; row < register_table3->rowCount(); row++)
  {
    register_table3->setItem(
      row, 0, new QTableWidgetItem(reg_list_special[row]));
    register_table3->setItem(
      row, 1, new QTableWidgetItem("0x" + QString::number(0, 16)));
  }

  // Create flags table
  flag_table = new QTableWidget(8, 2, this);
  flag_table->setGeometry(530, 320, 250, 300);
  flag_table->setHorizontalHeaderLabels(QStringList() << "Flag"
                                                      << "State");

  // Create label for flags table
  auto flag_label = new QLabel("Flags", this);
  flag_label->setGeometry(485, 320, 90, 20);
  flag_label->setFont(font);

  // Create labels for columns (flags table)
  auto flags = QStringList() << "C"
                             << "N"
                             << "P/V"
                             << "Unused1"
                             << "H"
                             << "Z"
                             << "S"
                             << "Unused2";

  // Place labels for columns (flags table)
  for (int row = 0; row < register_table1->rowCount(); row++)
  {
    flag_table->setItem(row, 0, new QTableWidgetItem(flags[row]));
    flag_table->setItem(
      row, 1, new QTableWidgetItem("0x" + QString::number(0, 16)));
  }
}

// CTOR of the `Window` class
Window::Window(QWidget* parent)
  : QWidget(parent)
{
  // Set size of the window
  setFixedSize(800, 830);

  setup_buttons();
  setup_tables();

  // Get logo image using relative path
  QPixmap pic("../../../../../../assets/logo.png");

  // allocate space for image and load image to `Window`
  team_logo_image = new QLabel(this);
  team_logo_image->setPixmap(pic);
  team_logo_image->setGeometry(45, 500, 200, 200);
}

// Event-handler for when `shutdown_button` is clicked
auto Window::shutdown_program(bool clicked) -> void
{
  if (clicked)
    QApplication::closeAllWindows();
}

// Event-handler for when `execute_rom_button` is clicked
auto Window::execute_rom(bool clicked) -> void
{
  if (clicked && !file_path.isNull())
  {
    QMessageBox hexdump_messagebox;
    hexdump_messagebox.setBaseSize(QSize(100, 500));

    QString msg = "Program ran successfully!";
    auto dump = emulator->mem.get_hexdump();

    hexdump_messagebox.setText(msg);
    hexdump_messagebox.setDetailedText(dump);
    hexdump_messagebox.exec();
  }
  else
  {
    QMessageBox error_messagebox;

    QString error_message = "ERROR. Please load ROM first before executing!";

    error_messagebox.setText(error_message);
    error_messagebox.exec();
  }
}

// Event-handler for when `load_rom_button` is clicked
auto Window::load_rom_dialog(bool clicked) -> void
{
  if (clicked)
  {
    // Let the user choose which test rom they want to load
    // using a file dialog.
    this->file_path = QFileDialog::getOpenFileName(
      this, "Open ROM", QDir::currentPath(), "All files (*.*) ;;");

    emulator = new CPUEmulator();

    // Initalize
    emulator->initialize(file_path.toStdString().c_str());

    QString dump = emulator->mem.get_hexdump();

    qDebug().noquote() << dump;
  }
}
