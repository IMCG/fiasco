INTERFACE [arm && pxa]:

EXTENSION class Bootstrap
{
public:
  enum { Cache_flush_area = 0xa0100000 }; // XXX: hacky
};
