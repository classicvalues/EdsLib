/*
 * LEW-19710-1, CCSDS SOIS Electronic Data Sheet Implementation
 *
 * Copyright (c) 2020 United States Government as represented by
 * the Administrator of the National Aeronautics and Space Administration.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


/**
 * \file     seds_xmlparser.h
 * \ingroup  tool
 * \author   joseph.p.hickey@nasa.gov
 *
 * Public interface to the XML parser routines
 * For full module description see the implementation file: seds_xmlparser.c
 */

#ifndef _SEDS_XMLPARSER_H_
#define _SEDS_XMLPARSER_H_

#include "seds_global.h"

/**
 * Lua-callable function to instantiate an XML parser object
 * and start building a document object model (DOM) tree
 */
int seds_xmlparser_create(lua_State *lua);

/**
 * Lua-callable function to read an XML file, adding it to
 * the DOM tree.
 */
int seds_xmlparser_readfile(lua_State *lua);

/**
 * Lua-callable function to finalize the DOM tree and return
 * it to the caller.
 */
int seds_xmlparser_finish(lua_State *lua);


#endif  /* _SEDS_XMLPARSER_H_ */

