// file      : odb/details/meta/remove-v.hxx
// author    : Boris Kolpackov <boris@codesynthesis.com>
// copyright : Copyright (c) 2009-2010 Code Synthesis Tools CC
// license   : GNU GPL v2; see accompanying LICENSE file

#ifndef ODB_DETAILS_META_REMOVE_V_HXX
#define ODB_DETAILS_META_REMOVE_V_HXX

namespace odb
{
  namespace details
  {
    namespace meta
    {
      template <typename X>
      struct remove_v
      {
        typedef X r;
      };

      template <typename X>
      struct remove_v<X volatile>
      {
        typedef X r;
      };
    }
  }
}

#endif // ODB_DETAILS_META_REMOVE_V_HXX
