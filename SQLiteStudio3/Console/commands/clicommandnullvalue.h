#ifndef CLICOMMANDNULLVALUE_H
#define CLICOMMANDNULLVALUE_H

#include "clicommand.h"

class CliCommandNullValue : public CliCommand
{
    public:
        void execute(const QStringList& args);
        QString shortHelp() const;
        QString fullHelp() const;
        void defineSyntax();
};

#endif // CLICOMMANDNULLVALUE_H