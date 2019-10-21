
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_PriorityQueue__
#define __java_util_PriorityQueue__

#pragma interface

#include <java/util/AbstractQueue.h>
#include <gcj/array.h>


class java::util::PriorityQueue : public ::java::util::AbstractQueue
{

public:
  PriorityQueue();
  PriorityQueue(::java::util::Collection *);
  PriorityQueue(jint);
  PriorityQueue(jint, ::java::util::Comparator *);
  PriorityQueue(::java::util::PriorityQueue *);
  PriorityQueue(::java::util::SortedSet *);
  virtual void clear();
  virtual ::java::util::Comparator * comparator();
  virtual ::java::util::Iterator * iterator();
  virtual jboolean offer(::java::lang::Object *);
  virtual ::java::lang::Object * peek();
  virtual ::java::lang::Object * poll();
  virtual jboolean remove(::java::lang::Object *);
  virtual jint size();
  virtual jboolean addAll(::java::util::Collection *);
public: // actually package-private
  virtual jint findSlot(jint);
  virtual void remove(jint);
  virtual void bubbleUp(jint);
  virtual void resize();
private:
  static const jint DEFAULT_CAPACITY = 11;
  static const jlong serialVersionUID = -7720805057305804111LL;
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::util::AbstractQueue)))) used;
  JArray< ::java::lang::Object * > * storage;
  ::java::util::Comparator * comparator__;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_PriorityQueue__
