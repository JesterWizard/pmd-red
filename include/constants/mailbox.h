#ifndef GUARD_CONSTANTS_MAILBOX_H
#define GUARD_CONSTANTS_MAILBOX_H

/* Pelipper bulletin board listing slots (unchanged from vanilla) */
#define MAX_PELIPPER_BOARD_JOBS 8
/* Job List capacity: array/save always 16; accept limit is GetMaxAcceptedJobs() */
#define MAX_ACCEPTED_JOBS_VANILLA 8
#define MAX_ACCEPTED_JOBS 16
#define NUM_MAILBOX_SLOTS 4
/* Bit-packed mail chunk: was 0x221 @ 8 job slots; 4 mailbox + 8 board + 16 jobs */
#define MAIL_INFO_SAVE_SIZE 0x280

enum JOB_LIST_MAIL_TYPES
{
    MAIL_TYPE_NONE,
    MAIL_TYPE_UNK1,
    MAIL_TYPE_UNK2,
    MAIL_TYPE_UNK3,
    MAIL_TYPE_UNK4,
    MAIL_TYPE_SUSPENDED_JOB,
    MAIL_TYPE_TAKEN_JOB,
    MAIL_TYPE_UNK7,
    MAIL_TYPE_UNK8,
    MAIL_TYPE_UNK9,
};

#endif // GUARD_CONSTANTS_MAILBOX_H