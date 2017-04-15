/*
 *
 *
 *  Created on: 2013-1-26
 *  Author: scott.cgi
 */

#ifndef style_guide_h
#define style_guide_h

/*
----------------------------------------------------------------------------------------------------

  The name use CamelCased.

  The variable first word lower case.

  The macro without parameter lower case words separated by '_'.

  The enum lower case words separated by '_'.

  The goto label lower case words separated by '_'

  The define head macro lower case words separated by '_' and end with 'h'

//--------------------------------------------------------------------------------------------------

  The global function first word upper case.

  The function pointer or function name first word upper case.

  The struct first word upper case.

  The file folder name first word upper case.

  The macro with parameter first word upper case.

//--------------------------------------------------------------------------------------------------

   The macro use for inline function not working.

   such as shortcut parameters of function call.

   such as macro specific functionality.

   such as generic parameter.

   such as varargs.

   such as type parameter.

   The private macro begin with '_'

//--------------------------------------------------------------------------------------------------

  The bool variable begin with prefix 'is'.

  The singleton begin with prefix 'A'.

  The function return boolean which show operation result named with prefix 'Try'.

  The function return boolean which show result named with prefix 'Is'.

//--------------------------------------------------------------------------------------------------

  In function body code comment use '//', all other like struct property, function define use '/**'.

  The "{" and "}" in separate line.

  The 'break' in separate line, not in same line with '{' or '}'.

  Try regional vertical alignment.

//--------------------------------------------------------------------------------------------------

  Method "Release" means free struct member memory space.

  Method with prefix "Create" means return malloc pointer, so first release and then free.

  Method with prefix "Init" or others means pointer on stack, so just release for delete.

//--------------------------------------------------------------------------------------------------

  The non-boolean value use conditional expressions in conditional judgments

  Use this '/------------------------' for split line

----------------------------------------------------------------------------------------------------
*/


/*
----------------------------------------------------------------------------------------------------
 This is means comment few blocks of code
----------------------------------------------------------------------------------------------------
*/

#endif
