
#ifndef LOGIC_PLUGIN_EXPORT_H
#define LOGIC_PLUGIN_EXPORT_H

#include <QtGlobal>

#ifdef LOGIC_PLUGIN
#    define LOGIC_PLUGIN_EXPORT Q_DECL_EXPORT
#else
#    define LOGIC_PLUGIN_EXPORT Q_DECL_IMPORT
#endif


#endif /* LOGIC_PLUGIN_EXPORT_H */