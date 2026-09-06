#include "speech_text_c2d.hpp"
#include "text.hpp"
#include <math.hpp>

SpeechTextObjectC2D::SpeechTextObjectC2D(const std::string &text, int maxWidth)
    : TextObjectC2D(text, 0, 0, "gfx/menu/Ubuntu-Bold"), SpeechText(text, maxWidth) {
    setColor(Math::color(0, 0, 0, 255));
    setCenterAligned(false); // easier for positioning logic
    setScale(16.0f / 30.0f); // scale rasterised font from 30px to 16px
    platformSetText(wrapText());
}

float SpeechTextObjectC2D::measureTextWidth(const std::string &text) {
    return getStringSize(text)[0];
}

void SpeechTextObjectC2D::platformSetText(const std::string &text) {
    TextObjectC2D::setText(text);
}

void SpeechTextObjectC2D::setText(std::string txt) {
    SpeechText::setText(txt);
}
