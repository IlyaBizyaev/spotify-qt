#pragma once

#include "spotify/spotify.hpp"

#include <QComboBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QWidget>
#include <QLineEdit>
#include <QNetworkAccessManager>
#include <QTextEdit>
#include <QTabWidget>
#include <QPushButton>

class DebugView: public QWidget
{
Q_OBJECT

public:
	explicit DebugView(const Settings &settings, QWidget *parent);

private:
	QComboBox *requestType = nullptr;
	QLineEdit *urlPath = nullptr;
	QNetworkAccessManager *networkManager = nullptr;
	QTextEdit *jsonRequest = nullptr;
	QTextEdit *jsonResponse = nullptr;
	QTabWidget *tabs = nullptr;

	const Settings &settings;

	void sendRequest(bool checked);
};