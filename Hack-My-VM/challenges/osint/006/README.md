# HackMyVM - OSINT Challenge 006

## URL

[HackMyVM Challenge 006](https://hackmyvm.eu/challenges/006)

## Concept

This challenge demonstrates how **DNS TXT records** can contain publicly accessible information.

The `nslookup` utility can be used to query DNS records for a domain. In this challenge, the required information is stored in a **TXT record**.

## Method of Solve

1. Open the challenge page and read the description carefully.
2. Identify that the challenge refers to a TXT record.
3. Query the TXT record of the target domain using `nslookup`:

```bash
nslookup -q=TXT hackmyvm.eu
```

4. The DNS response contains the required information:

```text
Non-authoritative answer:
hackmyvm.eu    text = "hmv{REDACTED}"
```

5. The value contained in the TXT record is the flag.

## Flag

```text
HMV{REDACTED}
```

## Key Takeaway

DNS records are not limited to resolving domain names to IP addresses. Records such as **TXT** can contain publicly accessible information and are therefore worth checking during OSINT and reconnaissance activities.
