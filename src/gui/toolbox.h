// For license of this file, see <project-root-folder>/LICENSE.md.

#ifndef TOOLBOX_H
#define TOOLBOX_H

#include <QTabWidget>

class QPlainTextEdit;

class ToolBox : public QTabWidget {
  Q_OBJECT

  public:
    explicit ToolBox(QWidget* parent = nullptr);

  private:
    QPlainTextEdit* m_txtOutput;
};

#endif // TOOLBOX_H