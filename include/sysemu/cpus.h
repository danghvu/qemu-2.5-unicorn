#ifndef QEMU_CPUS_H
#define QEMU_CPUS_H

struct uc_struct;

/* cpus.c */
void qemu_init_cpu_loop(struct uc_struct*);
int resume_all_vcpus(struct uc_struct*);
void pause_all_vcpus(struct uc_struct*);
void cpu_stop_current(struct uc_struct*);

void cpu_synchronize_all_states(void);
void cpu_synchronize_all_post_reset(void);
void cpu_synchronize_all_post_init(void);

#endif
