#define WINVER 0x0500
#include <windows.h>

#include <iostream>
#include <map>
#include <iterator>
using namespace std;

class KeyStroke
{
    private:
    int Ln = 0;
    INPUT* Race;

    public:
    KeyStroke(int L, WORD* Keys, DWORD* Configs)
    {
        Ln = L;
        Race = (INPUT*)malloc(sizeof(INPUT) * L);

        for (int I=0; I<L; I++)
        {
            Race[I].type = 1;
            Race[I].ki.wScan = 0;
            Race[I].ki.time = 0;
            Race[I].ki.dwExtraInfo = 0;
            Race[I].ki.wVk = Keys[I];
            Race[I].ki.dwFlags = Configs[I];
        }
    }
    void Call()
    {
        SendInput(Ln, Race, sizeof(INPUT));
    }
};

map<char, KeyStroke*> Keys;

int main(int argc, char** argv)
{
    Keys['a'] = new KeyStroke(2, new WORD[2]{0x41, 0x41}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['b'] = new KeyStroke(2, new WORD[2]{0x42, 0x42}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['c'] = new KeyStroke(2, new WORD[2]{0x43, 0x43}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['d'] = new KeyStroke(2, new WORD[2]{0x44, 0x44}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['e'] = new KeyStroke(2, new WORD[2]{0x45, 0x45}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['f'] = new KeyStroke(2, new WORD[2]{0x46, 0x46}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['g'] = new KeyStroke(2, new WORD[2]{0x47, 0x47}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['h'] = new KeyStroke(2, new WORD[2]{0x48, 0x48}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['i'] = new KeyStroke(2, new WORD[2]{0x49, 0x49}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['j'] = new KeyStroke(2, new WORD[2]{0x4A, 0x4A}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['k'] = new KeyStroke(2, new WORD[2]{0x4B, 0x4B}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['l'] = new KeyStroke(2, new WORD[2]{0x4C, 0x4C}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['m'] = new KeyStroke(2, new WORD[2]{0x4D, 0x4D}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['n'] = new KeyStroke(2, new WORD[2]{0x4E, 0x4E}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['o'] = new KeyStroke(2, new WORD[2]{0x4F, 0x4F}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['p'] = new KeyStroke(2, new WORD[2]{0x50, 0x50}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['q'] = new KeyStroke(2, new WORD[2]{0x51, 0x51}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['r'] = new KeyStroke(2, new WORD[2]{0x52, 0x52}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['s'] = new KeyStroke(2, new WORD[2]{0x53, 0x53}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['t'] = new KeyStroke(2, new WORD[2]{0x54, 0x54}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['u'] = new KeyStroke(2, new WORD[2]{0x55, 0x55}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['v'] = new KeyStroke(2, new WORD[2]{0x56, 0x56}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['w'] = new KeyStroke(2, new WORD[2]{0x57, 0x57}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['x'] = new KeyStroke(2, new WORD[2]{0x58, 0x58}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['y'] = new KeyStroke(2, new WORD[2]{0x59, 0x59}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['z'] = new KeyStroke(2, new WORD[2]{0x5A, 0x5A}, new DWORD[2]{0, KEYEVENTF_KEYUP});

    Keys['A'] = new KeyStroke(4, new WORD[4]{0x10, 0x41, 0x41, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['B'] = new KeyStroke(4, new WORD[4]{0x10, 0x42, 0x42, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['C'] = new KeyStroke(4, new WORD[4]{0x10, 0x43, 0x43, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['D'] = new KeyStroke(4, new WORD[4]{0x10, 0x44, 0x44, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['E'] = new KeyStroke(4, new WORD[4]{0x10, 0x45, 0x45, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['F'] = new KeyStroke(4, new WORD[4]{0x10, 0x46, 0x46, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['G'] = new KeyStroke(4, new WORD[4]{0x10, 0x47, 0x47, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['H'] = new KeyStroke(4, new WORD[4]{0x10, 0x48, 0x48, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['I'] = new KeyStroke(4, new WORD[4]{0x10, 0x49, 0x49, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['J'] = new KeyStroke(4, new WORD[4]{0x10, 0x4A, 0x4A, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['K'] = new KeyStroke(4, new WORD[4]{0x10, 0x4B, 0x4B, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['L'] = new KeyStroke(4, new WORD[4]{0x10, 0x4C, 0x4C, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['M'] = new KeyStroke(4, new WORD[4]{0x10, 0x4D, 0x4D, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['N'] = new KeyStroke(4, new WORD[4]{0x10, 0x4E, 0x4E, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['O'] = new KeyStroke(4, new WORD[4]{0x10, 0x4F, 0x4F, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['P'] = new KeyStroke(4, new WORD[4]{0x10, 0x50, 0x50, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['Q'] = new KeyStroke(4, new WORD[4]{0x10, 0x51, 0x51, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['R'] = new KeyStroke(4, new WORD[4]{0x10, 0x52, 0x52, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['S'] = new KeyStroke(4, new WORD[4]{0x10, 0x53, 0x53, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['T'] = new KeyStroke(4, new WORD[4]{0x10, 0x54, 0x54, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['U'] = new KeyStroke(4, new WORD[4]{0x10, 0x55, 0x55, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['V'] = new KeyStroke(4, new WORD[4]{0x10, 0x56, 0x56, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['W'] = new KeyStroke(4, new WORD[4]{0x10, 0x57, 0x57, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['X'] = new KeyStroke(4, new WORD[4]{0x10, 0x58, 0x58, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['Y'] = new KeyStroke(4, new WORD[4]{0x10, 0x59, 0x59, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['Z'] = new KeyStroke(4, new WORD[4]{0x10, 0x5A, 0x5A, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});

    Keys[' '] = new KeyStroke(2, new WORD[2]{0x20, 0x20}, new DWORD[2]{0, KEYEVENTF_KEYUP});

    Keys['0'] = new KeyStroke(2, new WORD[2]{0x30, 0x30}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['1'] = new KeyStroke(2, new WORD[2]{0x31, 0x31}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['2'] = new KeyStroke(2, new WORD[2]{0x32, 0x32}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['3'] = new KeyStroke(2, new WORD[2]{0x33, 0x33}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['4'] = new KeyStroke(2, new WORD[2]{0x34, 0x34}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['5'] = new KeyStroke(2, new WORD[2]{0x35, 0x35}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['6'] = new KeyStroke(2, new WORD[2]{0x36, 0x36}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['7'] = new KeyStroke(2, new WORD[2]{0x37, 0x37}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['8'] = new KeyStroke(2, new WORD[2]{0x38, 0x38}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['9'] = new KeyStroke(2, new WORD[2]{0x39, 0x39}, new DWORD[2]{0, KEYEVENTF_KEYUP});

    Keys[')'] = new KeyStroke(4, new WORD[4]{0x10, 0x30, 0x30, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['!'] = new KeyStroke(4, new WORD[4]{0x10, 0x31, 0x31, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['@'] = new KeyStroke(4, new WORD[4]{0x10, 0x32, 0x32, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['#'] = new KeyStroke(4, new WORD[4]{0x10, 0x33, 0x33, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['$'] = new KeyStroke(4, new WORD[4]{0x10, 0x34, 0x34, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['%'] = new KeyStroke(4, new WORD[4]{0x10, 0x35, 0x35, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['^'] = new KeyStroke(4, new WORD[4]{0x10, 0x36, 0x36, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['&'] = new KeyStroke(4, new WORD[4]{0x10, 0x37, 0x37, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['*'] = new KeyStroke(4, new WORD[4]{0x10, 0x38, 0x38, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['('] = new KeyStroke(4, new WORD[4]{0x10, 0x39, 0x39, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});

    Keys['='] = new KeyStroke(2, new WORD[2]{0xBB, 0xBB}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['-'] = new KeyStroke(2, new WORD[2]{0xBD, 0xBD}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys[','] = new KeyStroke(2, new WORD[2]{0xBC, 0xBC}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['.'] = new KeyStroke(2, new WORD[2]{0xBE, 0xBE}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['['] = new KeyStroke(2, new WORD[2]{0xDB, 0xDB}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys[']'] = new KeyStroke(2, new WORD[2]{0xDD, 0xDD}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['\\'] = new KeyStroke(2, new WORD[2]{0xDC, 0xDC}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys[';'] = new KeyStroke(2, new WORD[2]{0xBA, 0xBA}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys[(char)39] = new KeyStroke(2, new WORD[2]{0xDE, 0xDE}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['/'] = new KeyStroke(2, new WORD[2]{0xBF, 0xBF}, new DWORD[2]{0, KEYEVENTF_KEYUP});
    Keys['`'] = new KeyStroke(2, new WORD[2]{0xC0, 0xC0}, new DWORD[2]{0, KEYEVENTF_KEYUP});

    Keys['+'] = new KeyStroke(4, new WORD[4]{0x10, 0xBB, 0xBB, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['_'] = new KeyStroke(4, new WORD[4]{0x10, 0xBD, 0xBD, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['<'] = new KeyStroke(4, new WORD[4]{0x10, 0xBC, 0xBC, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['>'] = new KeyStroke(4, new WORD[4]{0x10, 0xBE, 0xBE, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['{'] = new KeyStroke(4, new WORD[4]{0x10, 0xDB, 0xDB, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['}'] = new KeyStroke(4, new WORD[4]{0x10, 0xDD, 0xDD, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['|'] = new KeyStroke(4, new WORD[4]{0x10, 0xDC, 0xDC, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys[':'] = new KeyStroke(4, new WORD[4]{0x10, 0xBA, 0xBA, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['"'] = new KeyStroke(4, new WORD[4]{0x10, 0xDE, 0xDE, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['?'] = new KeyStroke(4, new WORD[4]{0x10, 0xBF, 0xBF, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    Keys['~'] = new KeyStroke(4, new WORD[4]{0x10, 0xC0, 0xC0, 0x10}, new DWORD[4]{0, 0, KEYEVENTF_KEYUP, KEYEVENTF_KEYUP});
    
    cout << "Charging in 2 seconds." << endl;
    Sleep(2000);

    if (argc > 1)
    {
        for (int C=1; C<argc; C++)
        {
            string Word = string(argv[C]);
            int L = Word.length();
            for (int I=0; I<L; I++)
                Keys[Word[I]]->Call();
            if (C != argc-1)
                Keys['"']->Call();
        }
        
    }

    return 0;
}