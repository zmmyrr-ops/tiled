/*
 * ghostversion.cpp
 *
 * This file is part of Tiled.
 */

#include "ghostversion.h"

#ifndef TILED_VERSION
#define TILED_VERSION 1.12.2
#endif

#ifndef GHOST_VERSION
#define GHOST_VERSION 1.0.0
#endif

#define STRINGIFY(x) #x
#define AS_STRING(x) STRINGIFY(x)

namespace Tiled {

QString tiledBaselineVersion()
{
    return QStringLiteral(AS_STRING(TILED_VERSION));
}

QString ghostProductVersion()
{
    return QStringLiteral(AS_STRING(GHOST_VERSION));
}

QString ghostVersionDisplay()
{
    return QStringLiteral("%1（Tiled 基线 %2）")
            .arg(ghostProductVersion(), tiledBaselineVersion());
}

} // namespace Tiled
