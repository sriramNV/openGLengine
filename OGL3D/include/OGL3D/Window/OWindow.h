#pragma once
class OWindow
{
public:
	OWindow();
	~OWindow();

	void onDestroy();
	bool isClosed();

protected:
	void* m_handle = nullptr;
};

