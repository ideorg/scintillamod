#ifndef SCINTILLAMOD_INTERVEC_H
#define SCINTILLAMOD_INTERVEC_H

#include <string>
#include <vector>

typedef std::pair<int, std::string> InterPair;
typedef std::vector<InterPair> InterVec;
struct AnnotationHeader {
    short style;	// Style IndividualStyles implies array of styles
    short lines;
    int length;
};

struct InterStruct {
    AnnotationHeader h;
    InterVec v;
};

#endif //SCINTILLAMOD_INTERVEC_H
