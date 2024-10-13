#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define float long double
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false)
#define in cin.tie(NULL)
#define out cout.tie(NULL)
// #include <ext/pb_ds/assoc_container.hpp>

bool flag = true;

string userInput;

class Token
{
    string Attribute;
    string Value;

public:
    Token()
    {
        this->Attribute = "";
        this->Value = "";
    }
    void setTokenValue(string value)
    {
        this->Value = value;
    }
    void setTokenAttribute(string Attribute)
    {
        this->Attribute = Attribute;
    }
    string getTokenValue()
    {
        return this->Value;
    }
    string getTokenAttribute()
    {
        return this->Attribute;
    }
    int getTokenValueSize()
    {
        return this->Value.size();
    }
};

int track;

int Fail()
{
    flag = false;
    cout << "Invalid Number Format" << endl;
    return 12;
}

Token Check(Token token, int id)
{
    int state = 12;
    string s = token.getTokenValue();
    int t = token.getTokenValueSize();
    string ans = "";
    Token retToken;
    while (id < t)
    {
        if(!flag) {
            break;
        }
        switch (state)
        {
        case 12: 
            if (isdigit(s[id]))
            {
                state = 13;
                id++;
                track++;
            }
            else{
                state = Fail();
                break;
            }
            break;

        case 13:
            if (isdigit(s[id]))
            {
                state = 13;
                id++;
                track++;
            }
            else if (s[id] == '.')
            {
                state = 14;
                id++;
                track++;
            }
            else if (s[id] == 'E' || s[id] == 'e')
            {
                state = 16;
                id++;
                track++;
            }
            else
            {
                state = 20;
                id++;
                track++;
            }
            break;

        case 14:
            if (isdigit(s[id]))
            {
                state = 15;
                id++;
                track++;
            }
            else
            {
                state = Fail();
            }
            break;

        case 15:
            if (isdigit(s[id]))
            {
                id++;
                state = 15;
            }
            else if (s[id] == 'e' || s[id] == 'E')
            {
                state = 16;
                id++;
            }
            else
            {
                state = 21;
            }
            break;

        case 16:
            if (s[id] == '+' || s[id] == '-')
            {
                state = 17;
                id++;
            }
            else if (isdigit(s[id]))
            {
                state = 18;
                id++;
            }
            else
                state = Fail();
            break;

        case 17:
            if (isdigit(s[id]))
            {
                state = 18;
                id++;
            }
            else
                state = Fail();
            break;

        case 18:
            if (isdigit(s[id]))
            {
                state = 18;
                id++;
            }
            else
            {
                state = 19;
                id++;
            }
            break;

        case 19:
            for (int i = 0; i < id - 1; i++)
            {
                ans += s[i];
            }

            retToken.setTokenAttribute("SCIENTIFIC");
            retToken.setTokenValue(ans);
            return retToken;

        case 20:
            for (int i = 0; i < id - 1; i++)
            {
                ans += s[i];
            }

            retToken.setTokenAttribute("NUMBER");
            retToken.setTokenValue(ans);
            return retToken;

        case 21:
            for (int i = 0; i < id; i++)
            {
                ans += s[i];
            }
            retToken.setTokenAttribute("FLOAT");
            retToken.setTokenValue(ans);
            return retToken;

        default:
            state = Fail();
        }

        if (id == s.size())
        {
            if (state == 13)
            {
                retToken.setTokenAttribute("NUMBER");
                retToken.setTokenValue(token.getTokenValue());
            }
            else if (state == 15)
            {
                retToken.setTokenAttribute("FLOAT");
                retToken.setTokenValue(token.getTokenValue());
            }
            else if (state == 18)
            {
                retToken.setTokenAttribute("SCIENTIFIC");
                retToken.setTokenValue(token.getTokenValue());
            }
            return retToken;
        } else{
            retToken.setTokenAttribute("INVALID");
            retToken.setTokenValue(token.getTokenValue());
        }
    }
    return retToken; // In case no valid token is found
}

int32_t main()
{
    while (cin >> userInput)
    {
        int id = 0;
        Token token;
        token.setTokenValue(userInput);
        Token ans = Check(token, id);
        cout << "TOKEN: " << ans.getTokenValue() << " The number is: " << ans.getTokenAttribute() << endl;
        flag = true;
    }
    return 0;
}
