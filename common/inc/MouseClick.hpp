#ifndef _MOUSECLICK_HPP_
# define _MOUSECLICK_HPP_

# include "APacket.hpp"

class MouseClick: public APacket
{
    
public:
    MouseClick();
    MouseClick(unsigned char button, unsigned short posX, unsigned short posY);
    ~MouseClick();

    void print();

protected:
    virtual std::vector<char> to_bytes_body() const;
    virtual void to_readable_body() const;
    virtual void from_bytes_body(const std::vector<char> &bytes);
    virtual void from_readable_body();

private:
    unsigned char   _button;
    unsigned short  _posX;
    unsigned short  _posY;
};

#endif