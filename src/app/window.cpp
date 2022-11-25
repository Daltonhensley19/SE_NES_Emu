#include "window.h"
#include <QApplication>
#include <QDebug>
#include <QFileDialog>
#include <QMainWindow>
#include <QPixmap>
#include <QtWidgets>
#include <array>
#include <emu.h>

// Helper method to setup/place buttons on `Window`
auto Window::setup_buttons() -> void
{

  // Create and position the `execute_rom_button`
  // execute_rom_button = new QPushButton("Execute ROM");
  // execute_rom_button->setGeometry(70, 550, 100, 50);
  // execute_rom_button->setCheckable(true);

  // Wire event-handler to button
  // QObject::connect(
  // execute_rom_button, &QPushButton::clicked, this, &Window::execute_rom);

  // Create and position the `execute_instr_button`
  // execute_instr_button = new QPushButton("Execute Instr.");
  // execute_instr_button->setGeometry(180, 550, 100, 50);
  // execute_instr_button->setCheckable(true);

  // Wire event-handler to button
  // QObject::connect(
  // execute_instr_button, &QPushButton::clicked, this, &Window::execute_instr);
}

// Helper method to setup/place tables on `Window`
auto Window::setup_tables() -> void
{
  if (emulator == nullptr)
  {

    // General font size for all labels
    QFont font("Arial", 12, QFont::Bold);

    // Create primary register table
    register_table1 = new QTableWidget(8, 2, this);
    register_table1->setGeometry(45, 50, 250, 280);
    register_table1->setHorizontalHeaderLabels(QStringList() << "Register"
                                                             << "State");

    // Create label for primary register table
    auto reg_label1 = new QLabel("Primary", this);
    reg_label1->setGeometry(150, 30, 90, 20);
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
      if (row != 5)
      {
        register_table1->setItem(
          row, 0, new QTableWidgetItem(reg_list_prime[row]));
        register_table1->setItem(
          row, 1, new QTableWidgetItem("0x" + QString::number(row, 16)));
      }
      else
      {
        register_table1->setItem(
          row, 0, new QTableWidgetItem(reg_list_prime[row]));
        register_table1->setItem(
          row, 1, new QTableWidgetItem("0x" + QString::number(0, 16)));
      }
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
    register_table2->setGeometry(370, 50, 250, 280);
    register_table2->setHorizontalHeaderLabels(QStringList() << "Register"
                                                             << "State");

    // Create label for secondary register table
    auto reg_label2 = new QLabel("Secondary", this);
    reg_label2->setGeometry(465, 30, 90, 20);
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
    register_table3->setGeometry(45, 350, 250, 150);
    register_table3->setHorizontalHeaderLabels(QStringList() << "Register"
                                                             << "State");

    // Create label for special register table
    auto reg_label3 = new QLabel("Special", this);
    reg_label3->setGeometry(150, 330, 90, 20);
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
    flag_table->setGeometry(370, 350, 250, 300);
    flag_table->setHorizontalHeaderLabels(QStringList() << "Flag"
                                                        << "State");

    // Create label for flags table
    auto flag_label = new QLabel("Flags", this);
    flag_label->setGeometry(485, 330, 90, 20);
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
  else if (file_loaded)
  {
    // General font size for all labels
    QFont font("Arial", 14, QFont::Bold);

    // Create labels for columns (primary register table)
    auto reg_list_prime = QStringList() << "A1"
                                        << "B1"
                                        << "C1"
                                        << "D1"
                                        << "E1"
                                        << "F1"
                                        << "H1"
                                        << "L1";

    std::array<int, 8> regs1{emulator->regs.get_a(),
                             emulator->regs.get_b(),
                             emulator->regs.get_c(),
                             emulator->regs.get_d(),
                             emulator->regs.get_e(),
                             emulator->regs.get_f(),
                             emulator->regs.get_h(),
                             emulator->regs.get_l()};

    // Place labels for columns (primary register table)
    for (int row = 0; row < register_table1->rowCount(); row++)
    {
      register_table1->setItem(
        row, 0, new QTableWidgetItem(reg_list_prime[row]));

      QString wrapped_item = "0x" + QString::number(regs1[row], 16);
      if (register_table1->item(row, 1)->text() != wrapped_item)
      {
        qDebug() << register_table1->item(row, 1)->text() << "\t"
                 << wrapped_item << "\n";

        register_table1->setItem(
          row, 1, new QTableWidgetItem("0x" + QString::number(regs1[row], 16)));

        register_table1->item(row, 1)->setForeground(Qt::red);
      }
      else
      {
        register_table1->setItem(
          row, 1, new QTableWidgetItem("0x" + QString::number(regs1[row], 16)));
      }
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

    std::array<int, 8> regs2{emulator->regs.get_a_shadow(),
                             emulator->regs.get_b_shadow(),
                             emulator->regs.get_c_shadow(),
                             emulator->regs.get_d_shadow(),
                             emulator->regs.get_e_shadow(),
                             emulator->regs.get_f_shadow(),
                             emulator->regs.get_h_shadow(),
                             emulator->regs.get_l_shadow()};

    // Place labels for columns (secondary register table)
    for (int row = 0; row < register_table2->rowCount(); row++)
    {
      register_table2->setItem(row, 0, new QTableWidgetItem(reg_list_sub[row]));

      QString wrapped_item = "0x" + QString::number(regs2[row], 16);
      if (register_table2->item(row, 1)->text() != wrapped_item)
      {
        qDebug() << register_table2->item(row, 1)->text() << "\t"
                 << wrapped_item << "\n";

        register_table2->setItem(
          row, 1, new QTableWidgetItem("0x" + QString::number(regs2[row], 16)));

        register_table2->item(row, 1)->setForeground(Qt::red);
      }
      else
      {
        register_table2->setItem(
          row, 1, new QTableWidgetItem("0x" + QString::number(regs2[row], 16)));
      }
    }

    // Create labels for columns (special register table)
    auto reg_list_special = QStringList() << "PC"
                                          << "SP"
                                          << "IX"
                                          << "IY";

    std::array<int, 4> special_values{emulator->get_byte_at_pc_with_offset(0),
                                      emulator->regs.get_sp(),
                                      emulator->regs.get_ix(),
                                      emulator->regs.get_iy()};

    // Place labels for columns (special register table)
    for (int row = 0; row < register_table3->rowCount(); row++)
    {
      register_table3->setItem(
        row, 0, new QTableWidgetItem(reg_list_special[row]));

      QString wrapped_item = "0x" + QString::number(special_values[row], 16);
      if (register_table3->item(row, 1)->text() != wrapped_item)
      {
        qDebug() << register_table3->item(row, 1)->text() << "\t"
                 << wrapped_item << "\n";

        register_table3->setItem(
          row,
          1,
          new QTableWidgetItem("0x" +
                               QString::number(special_values[row], 16)));

        register_table3->item(row, 1)->setForeground(Qt::red);
      }
      else
      {
        register_table3->setItem(
          row,
          1,
          new QTableWidgetItem("0x" +
                               QString::number(special_values[row], 16)));
      }
    }

    // Create labels for columns (flags table)
    auto flags = QStringList() << "C"
                               << "N"
                               << "P/V"
                               << "Unused1"
                               << "H"
                               << "Z"
                               << "S"
                               << "Unused2";

    std::array<int, 8> flag_emu_values{emulator->regs.F.is_c_flag_set(),
                                       emulator->regs.F.is_n_flag_set(),
                                       emulator->regs.F.is_pv_flag_set(),
                                       0,
                                       emulator->regs.F.is_h_flag_set(),
                                       emulator->regs.F.is_z_flag_set(),
                                       emulator->regs.F.is_s_flag_set(),
                                       0};

    // Place labels for columns (flags table)
    for (int row = 0; row < register_table1->rowCount(); row++)
    {
      flag_table->setItem(row, 0, new QTableWidgetItem(flags[row]));

      QString wrapped_item = "0x" + QString::number(flag_emu_values[row], 16);
      if (flag_table->item(row, 1)->text() != wrapped_item)
      {
        qDebug() << flag_table->item(row, 1)->text() << "\t" << wrapped_item
                 << "\n";

        flag_table->setItem(
          row,
          1,
          new QTableWidgetItem("0x" +
                               QString::number(flag_emu_values[row], 16)));

        flag_table->item(row, 1)->setForeground(Qt::red);
      }
      else
      {
        flag_table->setItem(
          row,
          1,
          new QTableWidgetItem("0x" +
                               QString::number(flag_emu_values[row], 16)));
      }
    }
  }
}

auto Window::setup_toolbar() -> void
{
  // Create the `load_rom_button`
  load_rom_button = new QPushButton("Load ROM");
  load_rom_button->setCheckable(true);

  // Wire event-handler to load rom button
  QObject::connect(
    load_rom_button, &QPushButton::clicked, this, &Window::load_rom_dialog);

  // Create the `shutdown_button`
  shutdown_button = new QPushButton("Shutdown");
  shutdown_button->setCheckable(true);

  // Wire event-handler to shutdown button
  QObject::connect(
    shutdown_button, &QPushButton::clicked, this, &Window::shutdown_program);

  // Create the `execute_rom_button`
  execute_rom_button = new QPushButton("Execute ROM");
  execute_rom_button->setCheckable(true);

  // Wire event-handler to `execute_rom_button` button
  QObject::connect(
    execute_rom_button, &QPushButton::clicked, this, &Window::execute_rom);

  // Create the `execute_instr_button`
  execute_instr_button = new QPushButton("Execute Instr.");
  execute_instr_button->setCheckable(true);

  // Wire event-handler to `execute_instr_button` button
  QObject::connect(
    execute_instr_button, &QPushButton::clicked, this, &Window::execute_instr);

  // Add toolBar
  toolbar = new QToolBar(this);
  toolbar->setFixedHeight(28);
  toolbar->addWidget(shutdown_button);
  toolbar->addWidget(load_rom_button);
  toolbar->addWidget(execute_rom_button);
  toolbar->addWidget(execute_instr_button);
}

// CTOR of the `Window` class
Window::Window(QWidget* parent)
  : QWidget(parent)
{

  // Set size of the window
  setFixedSize(660, 700);

  // Add buttons and tables and toolbar to `Window`
  setup_tables();
  setup_toolbar();
  setup_buttons();

  // Get logo image using relative path (different based on OS!)
  QPixmap pic("../assets/logo.png");

  // allocate space for image and load image to `Window`
  team_logo_image = new QLabel(this);
  team_logo_image->setPixmap(pic);
  team_logo_image->setGeometry(45, 525, 190, 160);
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
  // Make sure user selects a ROM
  if (file_path.isNull() || emulator == nullptr)
  {
    QMessageBox error_messagebox;

    QString error_message = "ERROR. Please load ROM first before executing!";

    error_messagebox.setText(error_message);
    error_messagebox.exec();
  }
  else
  {
    // Run emulator
    emulator->Execute();

    // Show error if unknown opcode detected
    if (emulator->unknown_opcode_detected)
    {
      QMessageBox error_messagebox;

      QString error_message =
        "ERROR. Unknown opcode detected! Make sure Z80 program is well-formed!";

      QString problem_opcode =
        "Unknown opcode: 0x" +
        QString::number(emulator->unknown_problem_opcode, 16);

      error_messagebox.setText(error_message);
      error_messagebox.setDetailedText(problem_opcode);
      error_messagebox.exec();

      return;
    }

    // If emulator succeeds, we report via a messagebox
    QMessageBox messagebox;
    messagebox.setStandardButtons(QMessageBox::Save | QMessageBox::Ok);

    // Setup and display messagebox
    QString msg = "Program ran successfully!";
    messagebox.setText(msg);
    auto ret = messagebox.exec();

    // Save hexdump if user wishes
    if (ret == QMessageBox::Save)
    {
      auto dump     = emulator->mem.get_hexdump();
      auto filename = QFileDialog::getSaveFileName();

      QFile f(filename);
      f.open(QIODevice::WriteOnly);
      f.write(dump.toUtf8());
      f.close();
    }

    // Update tables to reflect state after emulation finish
    setup_tables();
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

    // Make sure user actually chooses a proper path
    if (!this->file_path.isNull() && !this->file_path.isEmpty())
    {
      emulator = new CPUEmulator();

      // Initalize
      emulator->initialize(file_path.toStdString().c_str());

      if (emulator->mem.rom_too_big)
      {
        QMessageBox error_messagebox;

        QString error_message = "ERROR. Provided file is too large!"
                                " Make sure file is <= 64Kb";

        error_messagebox.setText(error_message);
        error_messagebox.exec();

        delete emulator;
        emulator = nullptr;

        return;
      }

      QString dump = QString(QChar(emulator->mem.read_byte(0)));

      qDebug().noquote() << dump;

      setup_tables();
      file_loaded = true;
    }
  }
}

auto Window::execute_instr(bool clicked) -> void
{
  // Make sure user selects a ROM
  if (file_path.isNull() || emulator == nullptr)
  {
    QMessageBox error_messagebox;

    QString error_message = "ERROR. Please load ROM first before executing!";

    error_messagebox.setText(error_message);
    error_messagebox.exec();
  }
  else
  {
    // Run emulator
    emulator->ExecuteInstr();

    // Show error if unknown opcode detected
    if (emulator->unknown_opcode_detected)
    {
      QMessageBox error_messagebox;

      QString error_message =
        "ERROR. Unknown opcode detected! Make sure Z80 program is well-formed!";

      QString problem_opcode =
        "Unknown opcode: 0x" +
        QString::number(emulator->unknown_problem_opcode, 16);

      error_messagebox.setText(error_message);
      error_messagebox.setDetailedText(problem_opcode);
      error_messagebox.exec();

      return;
    }

    // If emulator halts, we report via a messagebox
    if (emulator->halt_detected)
    {
      QMessageBox messagebox;
      messagebox.setStandardButtons(QMessageBox::Save | QMessageBox::Ok);

      // Setup and display messagebox
      QString msg = "Program ran successfully!";
      messagebox.setText(msg);
      auto ret = messagebox.exec();

      // Save hexdump if user wishes
      if (ret == QMessageBox::Save)
      {
        auto dump     = emulator->mem.get_hexdump();
        auto filename = QFileDialog::getSaveFileName();

        QFile f(filename);
        f.open(QIODevice::WriteOnly);
        f.write(dump.toUtf8());
        f.close();
      }
    }

    // Update tables to reflect state after emulation finish
    setup_tables();
  }
}

