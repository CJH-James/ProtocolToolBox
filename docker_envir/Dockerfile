# Start with the GCC base image
FROM gcc:14.2.0

# ARG for the user permission
ARG USER_NAME
ARG USER_ID
ARG GROUP_ID
ARG WORKDIR

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive

# Install required tools and dependencies
RUN apt-get update && \
    apt-get install -y --no-install-recommends && \
    apt-get install -y sudo \
    cmake 


# Clean up unnecessary files
RUN apt-get clean && \
    rm -rf /var/lib/apt/lists/*

# Set the user permission
RUN addgroup --gid $GROUP_ID $USER_NAME
RUN adduser --disabled-password --gecos '' --uid $USER_ID --gid $GROUP_ID $USER_NAME
# Give the $USER_NAME user sudo privileges
RUN echo "$USER_NAME ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers
# switch to the user "$USER_NAME"
USER $USER_NAME

WORKDIR $WORKDIR

# Define the command to be run when the container starts
CMD ["bash"]