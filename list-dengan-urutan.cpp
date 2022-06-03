#include <iostream>
#include <string>

using namespace std;

const size_t MAX_ITEMS = 5;

class Item
{
    string m_desc;
    unsigned int m_harga;
    unsigned int m_code;
public:
    Item(string _desc , unsigned int _harga , unsigned int _code)
    : m_desc(_desc) , m_harga(_harga) , m_code(_code)
    {
    }
    ~Item(void)
    {
    }
    void tampilkan(void) const
    {
        std::cout << "Harga : Rp" << m_harga << " Desc : " << m_desc << std::endl;
    }
    unsigned int getCode(void)const
    {
        return m_code;
    }

} g_items[MAX_ITEMS] =
{
    {"bayam" , 3500 , 0001},
    {"kol" , 1000 , 0002},
    {"sawi manis 1" , 2000 , 0003},
    {"sawi manis 2" , 2500 , 0004},
    {"tomat" , 5000 , 0005}
};

bool tampilkan(unsigned int _code)
{
    bool foundItem = false;
    for(size_t i = 0 ; i < MAX_ITEMS ; ++ i)
        if( g_items[i].getCode() == _code)
        {
          g_items[i].tampilkan();
          foundItem = true;
          break;
        }
    return foundItem;
}
int main(int argc , char * argv[])
{
    tampilkan(0001);
    tampilkan(0002);
    tampilkan(0003);
    tampilkan(0004);
    tampilkan(0005);

 //   system("pause");
    return EXIT_SUCCESS;
}
