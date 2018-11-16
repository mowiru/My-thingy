#ifndef __objects_h__
#define __objects_h__

struct str {
  char* value;
  int length;
};

struct str newString(const char* Keks);

int rnd(int min, int max);

struct kette {
  struct str value;
  struct kette* next;
};

struct hr {
  int id;
  int age;
  double wage;

  struct hr* next;
};

struct hr* newChain(int id);

void chain_push(struct hr*& myChain, int id);

int chain_count(struct hr* human);

struct hr* chain_at(struct hr* human, int index);

void chain_insert(struct hr*& human, int id, int target);

void chain_remove(struct hr*& human, int target);


struct kette* newKette(const char* value);

void kette_push(struct kette*& MyKette, const char* NewElement);

int kette_count(struct kette* MyDonut);

struct kette kette_at(struct kette* MyDonut, int Index);

void kette_insert(struct kette*& MyDonut, const char* name, int target);

void kette_remove(struct kette*& MyDonut, int target);

#endif
