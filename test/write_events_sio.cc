#include "podio/SIOWriter.h"
#include "write_events.h"

int main(int, char**) {
  write<podio::SIOWriter>("edm4hep_events.sio");
  return 0;
}
