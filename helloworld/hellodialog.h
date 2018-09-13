#ifndef HELLODIALOG_H
#define HELLODIALOG_H

#include <QtWidgets/QDialog>
#include "ui_hellodialog.h"

class HelloDialog : public QDialog
{
	Q_OBJECT

public:
	HelloDialog(QWidget *parent = 0);
	~HelloDialog();

private:
	Ui::HelloDialogClass ui;
};

#endif // HELLODIALOG_H
