#include "speech_text_sdl1.hpp"
#include "text.hpp"

SpeechTextObjectSDL::SpeechTextObjectSDL(const std::string &text, int maxWidth)
    : TextObjectSDL1(text, 0, 0), SpeechText(text, maxWidth) {
    setColor(0x00);
    setCenterAligned(false); // easier for positioning logic
    platformSetText(wrapText());
}

SpeechTextObjectSDL::~SpeechTextObjectSDL() = default;

float SpeechTextObjectSDL::measureTextWidth(const std::string &text) {
    return getStringSize(text)[0];
}

void SpeechTextObjectSDL::platformSetText(const std::string &text) {
    TextObjectSDL1::setText(text);
}

void SpeechTextObjectSDL::setText(std::string txt) {
    SpeechText::setText(txt);
}
