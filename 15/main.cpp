#include "AddressBook.pb.h"
#include <iostream>

int main() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  hello::AddressBook address_book;

  address_book.add_person();

  std::cout << "person size: " << address_book.person_size() << std::endl;
}
