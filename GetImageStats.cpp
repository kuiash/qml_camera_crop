///////////////////////////////////////////////////////////////////////////////
/// (C) kindid ltd 2018+ //////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include "GetImageStats.h"

GetImageStats::GetImageStats(QObject *parent) : QObject(parent)
{ }

QString GetImageStats::getState(const QImage & image) const
{
    return QString("{ width: %1 height: %2 }").arg(image.width()).arg(image.height());
}
