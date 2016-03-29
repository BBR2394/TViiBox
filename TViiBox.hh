
#ifndef TVIIBOX_HH_
# define TVIIBOX_HH_

# include <list>

class TViiBox
{
public:
	TViiBox();
	~TViiBox();

private:
	IStream	_stream;
	IUI		_ui;

	std::list<IChannel *>	_channels;

public:
	bool init();
	bool getChannelFromFile();


};

#endif