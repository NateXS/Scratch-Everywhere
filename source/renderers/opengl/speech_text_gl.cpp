#include "speech_text_gl.hpp"
#include "text.hpp"
#include "text_gl.hpp"
#include <log.hpp>
#include <os.hpp>

SpeechTextObjectGL::SpeechTextObjectGL(const std::string &text, int maxWidth)
    : TextObjectGL(text, 0, 0, "gfx/ingame/fonts/NotoSans-Medium"), SpeechText(text, maxWidth) {
    setColor(0x000000FF);
    setCenterAligned(false); // easier for positioning logic
    platformSetText(wrapText());
}

SpeechTextObjectGL::~SpeechTextObjectGL() {
}

float SpeechTextObjectGL::measureTextWidth(const std::string &text) {
    return getStringSize(text)[0];
}

void SpeechTextObjectGL::platformSetText(const std::string &text) {
    TextObjectGL::setText(text);
}

void SpeechTextObjectGL::setText(std::string txt) {
    SpeechText::setText(txt);
}
