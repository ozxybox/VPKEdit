#include "EmptyPreview.h"

#include <Version.h>

EmptyPreview::EmptyPreview(QWidget* parent)
		: InfoPreview({":/logo.png"}, PROJECT_TITLE.data(), parent) {
	// We want the logo to be consistently greyed out
	this->setDisabled(true);
}
