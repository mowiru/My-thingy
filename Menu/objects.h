#ifndef __objects_h__
#define __objects_h__

struct str {
  char* value;
  int length;
};

struct str newString(const char* Keks);

struct kette {
  struct str value;
  struct kette* next;
};

struct kette* newKette(const char* value);

void kette_push(struct kette*& MyKette, const char* NewElement);

int kette_count(struct kette* MyDonut);

struct kette kette_at(struct kette* MyDonut, int Index);

#endif
