// For license of this file, see <project-root-folder>/LICENSE.md.

#include "common/exceptions/applicationexception.h"

ApplicationException::ApplicationException(const QString& message) : m_message(message) {}

QString ApplicationException::message() const {
  return m_message;
}
