from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QVBoxLayout, QTableWidget, QTableWidgetItem
app = QApplication([])

app.setStyle("Fusion")
window = QWidget()
layout = QVBoxLayout()



aregs_table1 = QTableWidget()
bregs_table2 = QTableWidget()
special_table3 = QTableWidget()
flags_table4 = QTableWidget()


a_regs = ["A-A", "A-B", "A-D", "A-H", "A-F", "A-C", "A-E", "A-L"]
b_regs = ["B-A", "B-B", "B-D", "B-H", "B-F", "B-C", "B-E", "B-L"]
special_regs = ["pc", "sp", "ix", "iy"]
flags = ["F-C", "F-N", "F-P", "F-V", "F-X1", "F-H", "F-Z", "F-S", "F-X2"]


def table_work(table, string_table, header, col, row):
    table.setColumnCount(col)
    table.setRowCount(row)
        
    table.setHorizontalHeaderLabels([f"{header}", "State"])
    for idx, reg in enumerate(string_table):
        table.setItem(idx, 0, QTableWidgetItem(reg))
        table.setItem(idx, 1, QTableWidgetItem("0"))

table_work(aregs_table1, a_regs, "Registers", 2, 8)
table_work(bregs_table2, b_regs, "Registers", 2, 8)
table_work(special_table3, special_regs, "Registers", 2, 4)
table_work(flags_table4, flags, "Flags", 2, 9)

layout.addWidget(aregs_table1)
layout.addWidget(bregs_table2)
layout.addWidget(special_table3)
layout.addWidget(flags_table4)

def shutdown_handler():
    QApplication.quit()


shutButton = QPushButton("Shutdown")
shutButton.clicked.connect(shutdown_handler)


layout.addWidget(QPushButton('Next Cycle'))
layout.addWidget(shutButton)
window.setLayout(layout)


window.show()
app.exec()