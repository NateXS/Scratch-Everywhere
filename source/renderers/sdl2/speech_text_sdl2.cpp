#include "speech_text_sdl2.hpp"
#include "text.hpp"

SpeechTextObjectSDL2::SpeechTextObjectSDL2(const std::string &text, int maxWidth)
    : TextObjectSDL2(text, 0, 0), SpeechText(text, maxWidth) {
    setColor(0x00);
    setCenterAligned(false); // easier for positioning logic
    platformSetText(wrapText());
}

SpeechTextObjectSDL2::~SpeechTextObjectSDL2() = default;

float SpeechTextObjectSDL2::measureTextWidth(const std::string &text) {
    return getStringSize(text)[0];
}

void SpeechTextObjectSDL2::platformSetText(const std::string &text) {
    TextObjectSDL2::setText(text);
}

void SpeechTextObjectSDL2::setText(std::string txt) {
    SpeechText::setText(txt);
}
