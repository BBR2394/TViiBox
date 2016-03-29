
#ifndef STREAMVLC_HH_
# define STREAMVLC_HH_

class StreamVLC
{
public:
	StreamVLC();
	~StreamVLC();

private:
	libvlc_instance_t		*inst;
	libvlc_media_player_t	*_mp;
	libvlc_media_t			*_m;

};

#endif