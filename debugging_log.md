# Debugging Log – Question 2

PRN: 202501100130 | Cold-drink flavour hash table | h(key)=key mod 23 | Linear probing

**Important:** The following are prompts for six entries, not claims that these commits have already occurred. Replace the bracketed parts with your real commit IDs, dates, errors, fixes, and observations. Do not invent debugging events.

## Commit 1 – Project setup and personalization
**Commit ID/date:** [fill in]
I created the project and recorded the PRN-based parameters. I verified that S=130, PRN mod 3=0 selects cold-drink flavours, and the even PRN selects division hashing and linear probing. [Add what you actually checked or corrected.]

## Commit 2 – Dataset generation
**Commit ID/date:** [fill in]
I generated the 20 values using v[i]=(130+13*i) mod 100. [Explain how you checked the sequence and any real mistake you found.]

## Commit 3 – Table initialization and hash function
**Commit ID/date:** [fill in]
I initialized all 23 positions to -1 and implemented h(key)=key mod 23. [Describe your test and result.]

## Commit 4 – Initial insertion
**Commit ID/date:** [fill in]
I added the first insertion logic. **Failed approach (include a genuine example):** [Describe an approach that really failed, what error it caused, and why you abandoned it.] I fixed it by [actual correction].

## Commit 5 – Linear probing
**Commit ID/date:** [fill in]
I implemented collision handling by checking the next index and wrapping around with modulo table size. [Describe an actual collision test and any correction.]

## Commit 6 – Display and final validation
**Commit ID/date:** [fill in]
I added the final table display and tested all 20 values. I compared the output with my hand-predicted table. [Record whether it matched; explain any mismatch and its correction.]

The assignment requires one paragraph per commit and at least one entry describing a failed approach.
