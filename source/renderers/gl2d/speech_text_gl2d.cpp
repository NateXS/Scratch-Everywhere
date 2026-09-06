#include "speech_text_gl2d.hpp"
#include "text_gl2d.hpp"
#include <math.hpp>

SpeechTextObjectGL2D::SpeechTextObjectGL2D(const std::string &text, int maxWidth)
    : TextObjectGL2D(text, 0, 0, "gfx/menu/Ubuntu-Bold", 14), SpeechText(text, maxWidth) {
    setColor(Math::color(0, 0, 0, 255));
    setCenterAligned(false);
    platformSetText(wrapText());
}

float SpeechTextObjectGL2D::measureTextWidth(const std::string &text) {
    return getStringSize(text)[0];
}

void SpeechTextObjectGL2D::platformSetText(const std::string &text) {
    TextObjectGL2D::setText(text);
}

void SpeechTextObjectGL2D::setText(std::string txt) {
    SpeechText::setText(txt);
}
