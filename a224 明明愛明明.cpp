#include <iostream>

using namespace std;

int main()
{
  char input[1000];

  while (cin >> input)
  {
    int alphabet[27] = {};
    int tmp = 0;
    int test = 0;

    for (int i = 0; input[i] != '\0'; i++)
    {
      switch ((int)input[i])
      {
      case 65:
      case 97:
        alphabet[0]++;
        break;
      case 66:
      case 98:
        alphabet[1]++;
        break;
      case 67:
      case 99:
        alphabet[2]++;
        break;
      case 68:
      case 100:
        alphabet[3]++;
        break;
      case 69:
      case 101:
        alphabet[4]++;
        break;
      case 70:
      case 102:
        alphabet[5]++;
        break;
      case 71:
      case 103:
        alphabet[6]++;
        break;
      case 72:
      case 104:
        alphabet[7]++;
        break;
      case 73:
      case 105:
        alphabet[8]++;
        break;
      case 74:
      case 106:
        alphabet[9]++;
        break;
      case 75:
      case 107:
        alphabet[10]++;
        break;
      case 76:
      case 108:
        alphabet[11]++;
        break;
      case 77:
      case 109:
        alphabet[12]++;
        break;
      case 78:
      case 110:
        alphabet[13]++;
        break;
      case 79:
      case 111:
        alphabet[14]++;
        break;
      case 80:
      case 112:
        alphabet[15]++;
        break;
      case 81:
      case 113:
        alphabet[16]++;
        break;
      case 82:
      case 114:
        alphabet[17]++;
        break;
      case 83:
      case 115:
        alphabet[18]++;
        break;
      case 84:
      case 116:
        alphabet[19]++;
        break;
      case 85:
      case 117:
        alphabet[20]++;
        break;
      case 86:
      case 118:
        alphabet[21]++;
        break;
      case 87:
      case 119:
        alphabet[22]++;
        break;
      case 88:
      case 120:
        alphabet[23]++;
        break;
      case 89:
      case 121:
        alphabet[24]++;
        break;
      case 90:
      case 122:
        alphabet[25]++;
        break;
      }
    }

    for (int i = 0; i < 26; i++)
    {
      if (alphabet[i] % 2 == 1)
      {
        tmp++;
      }

      if (tmp == 2)
      {
        cout << "no..." << endl;
        break;
      }
      else
      {
        test++;
      }
    }

    if (test == 26)
    {
      cout << "yes !" << endl;
    }
  }
}