#include <iostream>
#include <string>
#include <openssl/md5.h>
#include <cstdio>

using namespace std;

int main() {

  string secretkey = "bgvyzdsv";
  int number = 1;

  while (true) {
  string input = secretkey + to_string(number);
  unsigned char digest[MD5_DIGEST_LENGTH];

 MD5(
    reinterpret_cast<const unsigned char*>(input.c_str()),
    input.length(),
    digest
  );
  char hash[33];

  for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
   sprintf(&hash[i * 2], "%02x", digest[i]);
   }

     hash[32] = '\0';

    if (string(hash).substr(0, 6) == "000000") {
    cout << number << endl;
    break;
  }

  number++;
  //cout << number;
  //break;
 }

 return 0;
}
