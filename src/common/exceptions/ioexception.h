// For license of this file, see <project-root-folder>/LICENSE.md.

#ifndef IOEXCEPTION_H
#define IOEXCEPTION_H

#include "common/exceptions/applicationexception.h"

class IOException : public ApplicationException {
  public:
    explicit IOException(const QString& message = QString());
    virtual ~IOException() = default;
};

#endif // IOEXCEPTION_H
