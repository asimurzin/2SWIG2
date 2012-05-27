//  pythonFlu - Python wrapping for OpenFOAM C++ API
//  Copyright (C) 2010- Alexey Petrov
//  Copyright (C) 2009-2010 Pebble Bed Modular Reactor (Pty) Limited (PBMR)
//  
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//  
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//  
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//  See http://sourceforge.net/projects/pythonflu
//
//  Author : Alexey PETROV


//---------------------------------------------------------------------------
#ifndef shared_ptr_hxx
#define shared_ptr_hxx


//---------------------------------------------------------------------------
namespace boost
{
    template <class T> struct shared_ptr 
    {
        shared_ptr( shared_ptr const & r );

        T * get() const;
        
        T & operator* () const;

        bool unique() const;

        long use_count() const;

        %extend
        {
            T& operator() () const
            {
                return *self->get();
            }

            bool __nonzero__() const
            {
                return self->get() != 0;
            }
            
            T * __call__() const
            {
                return self->get();
            }
            
            bool valid() const
            {
              return self->get() != 0;
            }
        }
    };
}


//---------------------------------------------------------------------------
#endif
