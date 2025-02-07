#ifndef ICORE_H
#define ICORE_H

#include "core_export.h"

#include <QDir>
#include <QObject>
#include <QPluginLoader>
#include <QPointer>
#include <QSettings>
#include <QQmlApplicationEngine>

namespace Core {
    /*!
     * \brief Класс для загрузки плагинов и подготовки их к использованию
     */
    class CORE_EXPORT AbstractCore : public QObject
    {
        Q_OBJECT

    public:
        explicit AbstractCore();

        /*!
         * \brief В методе реализована логика предоставления прямого доступа к каждому плагину,
         * лежащему в папке ../plugins. Указатели на root component каждого плагина добавляются в
         * список(QList<QPointer<QObject>> _plugins)
         * \param path - в этой строке находится путь до папки plugins
         */
        void loadPlugins(const QString &path);

        /*!
         * \brief Возвращает указатель на QQmlApplicationEngine
         */
        QPointer<QQmlApplicationEngine> qmlEngine() const;

    private:
        /*!
         * \brief Список плагинов, которые будут загружены из папки plugins
         */
        QList<QPointer<QObject>> _plugins;

        /*!
         * \brief Указатель на движок QML
         */
        QPointer<QQmlApplicationEngine> _qmlEngine;

        /*!
         * \brief Указатель на QSettings
         */
        QPointer<QSettings> _settings;
    };
}

#endif // ICORE_H
