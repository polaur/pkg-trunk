
#ifndef KACTIVITIESSTATS_EXPORT_H
#define KACTIVITIESSTATS_EXPORT_H

#ifdef KACTIVITIESSTATS_STATIC_DEFINE
#  define KACTIVITIESSTATS_EXPORT
#  define KACTIVITIESSTATS_NO_EXPORT
#else
#  ifndef KACTIVITIESSTATS_EXPORT
#    ifdef KF5ActivitiesStats_EXPORTS
        /* We are building this library */
#      define KACTIVITIESSTATS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KACTIVITIESSTATS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KACTIVITIESSTATS_NO_EXPORT
#    define KACTIVITIESSTATS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KACTIVITIESSTATS_DEPRECATED
#  define KACTIVITIESSTATS_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KACTIVITIESSTATS_DEPRECATED_EXPORT
#  define KACTIVITIESSTATS_DEPRECATED_EXPORT KACTIVITIESSTATS_EXPORT KACTIVITIESSTATS_DEPRECATED
#endif

#ifndef KACTIVITIESSTATS_DEPRECATED_NO_EXPORT
#  define KACTIVITIESSTATS_DEPRECATED_NO_EXPORT KACTIVITIESSTATS_NO_EXPORT KACTIVITIESSTATS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KACTIVITIESSTATS_NO_DEPRECATED
#    define KACTIVITIESSTATS_NO_DEPRECATED
#  endif
#endif

#endif
