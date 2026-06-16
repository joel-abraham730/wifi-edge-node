# Day 15 - Zelbytes IoT Platform Architecture Preview

## Overview
Studied planned Zelbytes IoT platform architecture and prepared 
firmware stubs for future production integration. Integration is 
not yet live - this is a forward-planning exercise.

## Key Points
- Zelbytes is building dedicated IoT endpoints at careers.zelbytes.com
- Future: POST https://careers.zelbytes.com/api/v1/iot/telemetry
- Future: mqtts://careers.zelbytes.com:8883 with device tokens
- Firmware uses #ifdef ZELBYTES_PLATFORM placeholders so switching 
  from lab to production is a config change not a rewrite

## Monitor Portal Announcements
Watch careers.zelbytes.com for new endpoint announcements:
- /api/v1/iot/telemetry (HTTP ingest)
- mqtts://careers.zelbytes.com:8883 (MQTT broker)
- Device registration UI for per-device JWT tokens

## Files
- docs/zelbytes_platform_preview.md - Architecture diagram
- docs/sensorbundle_field_mapping.md - Field mapping to future API
- docs/migration_checklist.md - Lab to production migration steps
- firmware/zelbytes_platform.h - Platform config placeholder header