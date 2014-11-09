#ifndef _RNA_TRANSCRIPTION_H
#define _RNA_TRANSCRIPTION_H

#include <string>

namespace transcription {

char to_rna(char unit);
std::string to_rna(std::string strand);

}

#endif

