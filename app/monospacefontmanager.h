#ifndef MONOSPACEFONTMANAGER_H
#define MONOSPACEFONTMANAGER_H

#include <QObject>
#include <QFontDatabase>

class MonospaceFontManager : public QObject
{
    Q_OBJECT
public:
    explicit MonospaceFontManager(QObject *parent = nullptr);
    Q_INVOKABLE QStringList retrieveMonospaceFonts();
    Q_INVOKABLE QStringList retrieveAllFonts();
};

#endif // MONOSPACEFONTMANAGER_H
