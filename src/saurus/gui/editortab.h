// For license of this file, see <project-root-folder>/LICENSE.md.

#ifndef EDITORTAB_H
#define EDITORTAB_H

#include "saurus/gui/tab.h"
#include "saurus/gui/texteditor.h"

class TextApplication;

class EditorTab : public Tab {
  public:
    explicit EditorTab(TextApplication* text_app, TextEditor* editor);
    explicit EditorTab(TextApplication* text_app);

    virtual TextEditor* primaryEditor() const override;
    virtual QList<TextEditor*> allEditors() const override;
    virtual int countOfEditors() const override;
    virtual TabTyp tabType() const override;

  protected:
    virtual void closeEvent(QCloseEvent* event) override;

  private:
    TextEditor* m_editor;
};

#endif // EDITORTAB_H
