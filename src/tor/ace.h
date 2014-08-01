/* Copyright (c) 2014, AceCoin/AceSend Developers */
/* See LICENSE for licensing information */

/**
 * \file ace.h
 * \brief Headers for ace.cpp
 **/

#ifndef TOR_RAZOR_H
#define TOR_RAZOR_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* ace_tor_data_directory(
    );

    char const* ace_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

