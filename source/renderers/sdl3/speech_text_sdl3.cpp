#include "speech_text_sdl3.hpp"
#include "text.hpp"

SpeechTextObjectSDL3::SpeechTextObjectSDL3(const std::string &text, int maxWidth)
    : TextObjectSDL3(text, 0, 0), SpeechText(text, maxWidth) {
    setColor(0x00);
    setCenterAligned(false); // easier for positioning logic
    platformSetText(wrapText());
}

SpeechTextObjectSDL3::~SpeechTextObjectSDL3() = default;

float SpeechTextObjectSDL3::measureTextWidth(const std::string &text) {
    return getStringSize(text)[0];
}

void SpeechTextObjectSDL3::platformSetText(const std::string &text) {
    TextObjectSDL3::setText(text);
}

void SpeechTextObjectSDL3::setText(std::string txt) {
    SpeechText::setText(txt);
}
