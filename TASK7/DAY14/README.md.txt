# Day 14 - HTTP REST vs MQTT vs CoAP Trade-offs

## Overview
Compared HTTP, MQTT, and CoAP protocols for polyhouse telemetry across 
latency, overhead, offline behavior, security, and firewall traversal.
Documented byte estimates based on actual telemetry payload used in 
Days 7-13.

## Key Findings
- HTTPS: best for infrequent uploads, firewall-friendly, high TLS overhead
- MQTT: best for live telemetry + commands on mains-powered nodes
- CoAP: best for battery-powered sleepy nodes (future Day 17)

## Files
- docs/protocol_comparison.md - Full decision matrix and recommendations