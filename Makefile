OBJS=tools.o
NAME=SDLP_tools

CXXFLAGS=-Wall -Wextra `sdl-config --cflags` -fPIC -fsigned-bitfields -std=gnu++0x -g
LDFLAGS=-shared

LIB=lib$(NAME).so
DEST=/home/luc/libs
VERSION=0.1

INCLUDES=/home/luc/includes
INCFILE=$(NAME).hpp
INCSDIR=$(INCLUDES)/$(NAME)

PCFILE=$(NAME).pc
PCDIR=/usr/lib/pkgconfig

all : $(LIB)

$(LIB) : $(OBJS)
	g++ $(CXXFLAGS)    -o $@	$^ $(LDFLAGS)
	chmod -x $(LIB)

%.o : %.cpp %.hpp
	g++ $(CXXFLAGS) -c -o $@	$<

clean :
	@touch $(OBJS) $(LIB)
	@rm -v $(OBJS) $(LIB)

rec : clean all

install : $(LIB)
	@cp -v $(LIB) $(DEST)
	@mkdir $(INCSDIR)
	@cp -v $(INCFILE) $(INCLUDES)
	@cp -v `ls *.hpp --ignore=$(INCFILE)` $(INCSDIR)
	@cp -v $(PCFILE) $(PCDIR)

uninstall : $(LIBS)
	@touch $(DEST)/$(LIB) $(INCLUDES)/$(INCFILE) $(PCDIR)/$(PCFILE) $(INCSDIR)
	@rm -v $(DEST)/$(LIB) $(INCLUDES)/$(INCFILE)
	@rm -rv $(INCSDIR)
	@rm -v $(PCDIR)/$(PCFILE)

mr-proper : uninstall clean

reinstall : uninstall rec install

doc : doc/Doxyfile
	cd doc && doxygen Doxyfile
	firefox doc/html/index.html > /dev/null 2>&1 &

.PHONY : doc
