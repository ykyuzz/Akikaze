#include "c.hpp"

int c::get()
{
    return m_value;
}

void c::set( int const value )
{
    m_value = value;
}