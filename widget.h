#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui
{
class Widget;
}

class QTcpSocket;

namespace DuarteCorporation
{
class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void on_send_clicked();
    void on_bind_clicked();
private:
    Ui::Widget *ui;
    QTcpSocket *mSocket;
};
} // end namespace DuarteCorporation

#endif // WIDGET_H
